myind :: Num a =>([a],Int) -> a
myind ([], n) = 0
myind ((x:xs), n)
    | (n < 0) = 0 
    | (n >= length(xs)+1) = 0
    | (n == 0) = x 
    | otherwise = myind (xs, n-1)

main = do
    print(myind ([1,2,3,4], 2))
    print(myind ([],2))
    print(myind ([1,2,3,4], 5))
    print(myind ([1,2,3,4], -2))