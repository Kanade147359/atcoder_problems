N = int(input())  # nは入力回数
S = [input() for _ in range(N)]
S.reverse()
for i in range(N):
    print(S[i])

