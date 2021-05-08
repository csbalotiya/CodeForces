
// question id - 1520A - 10

for _ in range(int(input())):
    n = int(input())
    s = input()
    temp = s[0]
    for i in range(1,len(s)):
        if s[i-1] != s[i]:
            temp += s[i]
 
    #print(temp)
    arr = [0]*256
    for i in range(len(temp)):
        arr[ord(temp[i])]+=1
        if(arr[ord(temp[i])] > 1):
            print("NO")
            break
    else:
        print("YES")
