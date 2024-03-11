import numpy as np
import sys
import time
sys.stdout = open('TimeSortNumpy.out', 'w')

for i in range(1, 11):
    file = "Test"
    if (i < 10): file = file + "0"
    file = file + str(i)
    sys.stdin = open(f'{file}.inp', 'r') 
    n = int(input())
    ar = list(map(int,input().split()))
    start = time.time()
    ar = np.sort(ar)
    end = time.time()
    print((end - start) * 1000)
    