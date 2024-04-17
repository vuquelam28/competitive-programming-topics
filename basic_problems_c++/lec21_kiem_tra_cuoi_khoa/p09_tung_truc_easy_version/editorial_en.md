# Cedar - Bamboo Road (Easy Version) - Editorial

Sort the trees in ascending order of distance. As this problem has a rather small data limit, we use a brute force approach - examine every segment to see which one has at least $a$ cedar trees and $b$ bamboo trees.

Consider every position $i \ (1 \le i \le n),$ we will try to find a shortest segment starting from the $i$-$th$ tree that contains at least $a$ cedar trees and $b$ bamboo trees. If there are no segments satisfying the requirment starting from the currently considered position, continuing the program will still result in no segments found.

Complexity: $O(n^2)$.