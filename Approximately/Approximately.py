#!/usr/bin/env python
from __future__ import print_function
T = int(raw_input())
i = 0
pi_decimals = "415926530119026040722614947737296840070086399613316"
while i < T:
	d = int(raw_input())
	if d == 0:
		print ("3", end="\n")
	else:
		d = d - 1
		if d < 51:
			print ("3.1"+pi_decimals[:d],end="")
		else:
			print ("3.1"+pi_decimals[:d],end="")
			d = d - 51;
			c = 0
			while c < d:
				print(pi_decimals[(c) % len(pi_decimals)], end="")
				c = c + 1
		print("\n", end="")
	i = i + 1