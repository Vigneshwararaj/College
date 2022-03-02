hail :: Int -> IO()
hail n=do
 print(n)
 if n==1 then print "end of the list"
 else if n `mod` 2==0 then hail(div n 2)
 else hail(n*3 + 1)
 
main=do
    putStrLn "Enter n value"
    x <- getLine
    let n = read x :: Int
    print("hail stone series is :")
    hail n
