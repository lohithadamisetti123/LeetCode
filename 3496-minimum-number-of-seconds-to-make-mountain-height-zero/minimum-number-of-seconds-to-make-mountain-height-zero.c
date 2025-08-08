#include <stdbool.h>

long long maxHeightReduced(int mountainHeight, int* workerTimes, int workerTimesSize, long long maxTime) {
    long long totalHeightReduced = 0;
    for (int i = 0; i < workerTimesSize; ++i) {
        long long time = workerTimes[i];
        long long low = 0, high = mountainHeight;
        while (low < high) {
            long long mid = (low + high + 1) / 2;
            if (time * (mid * (mid + 1)) / 2 <= maxTime) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        totalHeightReduced += low;
        if (totalHeightReduced >= mountainHeight) {
            return totalHeightReduced;
        }
    }
    return totalHeightReduced;
}

long long minNumberOfSeconds(int mountainHeight, int* workerTimes, int workerTimesSize) {
    long long left = 1, right = 0;
    for (int i = 0; i < workerTimesSize; ++i) {
        if (workerTimes[i] > right) {
            right = workerTimes[i];
        }
    }
    
    long long maxWork = (long long)mountainHeight * (mountainHeight + 1) / 2;
    right *= maxWork;
    
    while (left < right) {
        long long mid = (left + right) / 2;
        if (maxHeightReduced(mountainHeight, workerTimes, workerTimesSize, mid) >= mountainHeight) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}
