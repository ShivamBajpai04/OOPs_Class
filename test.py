def count_odd(arr):
    odd_count = 0
    for row in arr:
        for num in row:
            if num % 2 == 1:
                odd_count += 1
    print(f"Odd count = {odd_count}")

def resolve_query(arr, queries):
    for query in queries:
        if query[0] == 0:
            for j in range(len(arr[0])):
                arr[query[1]][j] += 1
        else:
            for i in range(len(arr)):
                arr[i][query[1]] += 1

def get_query(q):
    queries = []
    for _ in range(q):
        query = list(map(int, input().split()))
        queries.append(query)
    return queries

def init_array(n, m):
    return [[0 for _ in range(m)] for _ in range(n)]

#driver

n, m = map(int, input().split())
arr = init_array(n, m)
q = int(input())
queries = get_query(q)
resolve_query(arr, queries)
count_odd(arr)