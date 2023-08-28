def prefix_score(arr = [1, 2, 3]):
    i = 1
    ans = []
    while i <= len(arr):
        tmp = arr[:i]
        j = 0
        while j < len(tmp):
            tmp[j] += max(tmp)
            j += 1
        ans.append(sum(tmp))
        i += 1
    return ans

print(prefix_score())
