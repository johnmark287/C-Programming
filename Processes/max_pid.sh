#!/bin/bash

# Check if the system is 64-bit or 32-bit
if [ "$(getconf LONG_BIT)" -eq "64" ]; then
	echo "Maximum PID value for a 64-bit system: $((2**31 - 1))"
else
	echo "Maximum PID value for a 32-bit system: $((2**15 - 1))"
fi
