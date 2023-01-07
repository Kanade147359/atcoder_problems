N, M = map(int, (input().split()))
graph = [[0]*N for _ in range(N)]
for _ in range(M):
    a, b = map(int, input().split())
    graph[a-1][b-1] = 1
    graph[b-1][a-1] = 1  



