def main():
    count=10
    processtime=[2, 3, 1, 4, 3, 2, 3, 5, 2, 1]
    duetime=[4, 7, 9, 13, 8, 17, 9, 11, 22, 25]
    jobs=[]
    for i in range (count):
        t=(processtime[i],duetime[i])
        jobs.append(t)

    jobs.sort(key=lambda x: x[0])
    t1=0
    jobintervals=[]
    for j in range(count):
        t2=(t1,t1+jobs[j][0])
        jobintervals.append(t2)
        t1=t1+jobs[j][0]
    lateness=0
    for i in range(count):
        lateness=max(0,jobintervals[i][1]-jobs[i][1])
        print('(',jobintervals[i][0],',',jobintervals[i][1],')',"Lateness: ",jobintervals[i][1]-jobs[i][1])

if __name__ == '__main__':
    main()    