import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

px = 0

# count of prefix XOR occurrences based on index parity
even_cnt = {}
odd_cnt = {}

even_cnt[0] = 1  # prefix before start (index -1 treated as even)
odd_cnt[0] = 0

SE = 0
SO = 0

for i in range(n):
    px ^= arr[i]

    if i % 2 == 0:
        # even index
        # even length → different parity
        SE += odd_cnt.get(px, 0)
        # odd length → same parity
        SO += even_cnt.get(px, 0)
        even_cnt[px] = even_cnt.get(px, 0) + 1
    else:
        # odd index
        SE += even_cnt.get(px, 0)
        SO += odd_cnt.get(px, 0)
        odd_cnt[px] = odd_cnt.get(px, 0) + 1

print(abs(SE - SO))