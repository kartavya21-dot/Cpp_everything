import numpy as np
import math

def estimate_complexity(ns, times):
    """Enhanced version with R² and multiple complexity checks"""
    if len(ns) != len(times) or len(ns) < 2:
        raise ValueError("ns and times must have same length and at least 2 points")

    ns = np.array(ns, dtype=float)
    times = np.array(times, dtype=float)

    # Filter out zeros or invalid values
    valid = (ns > 0) & (times > 0)
    ns, times = ns[valid], times[valid]

    # Log-transform
    log_n = np.log(ns)
    log_t = np.log(times)

    # Linear regression
    slope, intercept = np.polyfit(log_n, log_t, 1)
    k = slope

    # Calculate R² (goodness of fit)
    predicted = slope * log_n + intercept
    ss_res = np.sum((log_t - predicted) ** 2)
    ss_tot = np.sum((log_t - np.mean(log_t)) ** 2)
    r_squared = 1 - (ss_res / ss_tot)

    # Test multiple complexity models
    models = {}
    
    # O(1)
    models['O(1)'] = fit_model(ns, times, lambda n: np.ones_like(n))
    
    # O(log n)
    models['O(log n)'] = fit_model(ns, times, lambda n: np.log(n))
    
    # O(n)
    models['O(n)'] = fit_model(ns, times, lambda n: n)
    
    # O(n log n)
    models['O(n log n)'] = fit_model(ns, times, lambda n: n * np.log(n))
    
    # O(n²)
    models['O(n²)'] = fit_model(ns, times, lambda n: n ** 2)
    
    # O(n³)
    models['O(n³)'] = fit_model(ns, times, lambda n: n ** 3)

    # Find best fit
    best_model = max(models.items(), key=lambda x: x[1])

    return {
        "slope": round(k, 2),
        "intercept": round(intercept, 2),
        "r_squared": round(r_squared, 3),
        "estimated_complexity": best_model[0],
        "confidence": "high" if best_model[1] > 0.98 else "medium" if best_model[1] > 0.95 else "low",
        "all_models": {name: round(r2, 3) for name, r2 in models.items()}
    }

def fit_model(ns, times, func):
    """Fit a specific complexity model and return R²"""
    X = func(ns)
    # Handle cases where model might not be appropriate
    if np.any(np.isnan(X)) or np.any(np.isinf(X)):
        return -np.inf
    
    # Linear regression: times = a * X + b
    coeffs = np.polyfit(X, times, 1)
    predicted = coeffs[0] * X + coeffs[1]
    
    ss_res = np.sum((times - predicted) ** 2)
    ss_tot = np.sum((times - np.mean(times)) ** 2)
    
    if ss_tot == 0:
        return -np.inf
    
    return 1 - (ss_res / ss_tot)

# 🧩 Example usage
if __name__ == "__main__":
    # ns = [10, 100, 1000, 10000, 100000, 1000000]
    # times = [0, 1001, 2998, 29030, 284569, 2825969]  # milliseconds
    # ns = [10, 100, 1000, 10000, 100000, 1000000]
    # times = [1992, 14998, 87999, 806661, 8421312, 81678564]  # milliseconds

    # ns = [10, 50, 100, 500, 1000, 5000, 10000, 50000, 100000]
    # times = [988, 3996, 9998, 45706, 82016, 405205, 811719, 4182574, 7814470]

    ns = [10, 50, 100, 500, 1000, 5000, 10000, 50000, 100000]
    times = [0, 0, 0, 0, 0, 0, 0, 2000, 4002]

# 10 0
# 100 1001
# 1000 2998
# 10000 29030
# 100000 284569
# 1000000 2825969

    result = estimate_complexity(ns, times)
    print("📊 Input sizes:", ns)
    print("⏱️ Times (ms):", times)
    print(f"📈 Estimated Complexity: {result['estimated_complexity']}")
    print(f"   (slope = {result['slope']}, intercept = {result['intercept']})")
