from sys import stdin, stdout 
import sys
import math
import itertools
from collections import defaultdict
sys.setrecursionlimit(10**6)


def main(): 
	t = int(stdin.readline().strip())
	for j in range (1,t+1):
		x,n = map(int,stdin.readline().split())

		if n%4 == 0:
			ans = x
		elif n%4 == 1:
			if x&1:
				ans = x + n
			else:
				ans = x - n
		elif n%4 == 2:
			#n is even
			#n-1 is odd
			if x&1:
				#odd+odd-even
				ans = x + (n-1) - n
			else:
				#even-odd+even
				ans = x - (n-1) + n                                                                                                                          
		else:
			#n is odd
			#n-1 is even
			#n-2 is odd
			if x&1:
				#odd+odd-even-odd
				ans = x + (n-2) - (n-1) - n
			else:
				#even-odd+even+odd
				ans = x - (n-2) + (n-1) + n

		stdout.write(str(ans)+'\n') 
 
if __name__ == "__main__": 
	main()	