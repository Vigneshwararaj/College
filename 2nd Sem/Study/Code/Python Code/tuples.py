count=dict()
fh=input('Enter the file name: ')
file=open(fh)
for line in file:
    line=line.rstrip()
    if line.startswith('From '):
        words=line.split()
        word=words[5].split(':')
        count[word[0]]=count.get(word[0],0)+1
x=sorted((k,v) for (k,v) in count.items())
for w,i in x:
    print(w,i)