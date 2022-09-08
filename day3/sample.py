a="00000000000000000000000000001011"
b=0
count=0
while(b<len(a)):
    if(a[b]=="1"):
        count+=1
        print(a[b],count)

        

    b+=1
print(count)