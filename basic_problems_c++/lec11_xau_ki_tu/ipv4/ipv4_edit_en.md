# IPV4 Address - Editorial

Iterate through every character in the string; if it is a digit, concatenate it into a number, or else if it is a `.`, check two things:
- Whether the newly concatenated number lies in the range $[0, 255]$. If not, this is not a valid IPV4 string.
- Increase the number of octets, what an integer in an IPV4 address is called, whenever a `.` appears. If the number of octets is greater than $4$, this is also not a valid IPV4 string.

After iterating through the whole string, if there is no position where either one of the above conditions is violated, and the number of octets equals $4$, this is a valid IPV4 string.