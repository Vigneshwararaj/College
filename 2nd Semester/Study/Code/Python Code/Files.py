# Use the file name mbox-short.txt as the file name
count=dict()
fname = input("Enter file name: ")
fh = open(fname)
for line in fh:
    if line.startswith('It'):
        words=line.split()
    print(words[1])    