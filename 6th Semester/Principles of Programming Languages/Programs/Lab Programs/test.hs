fun1:: Int -> [a] -> [a]
fun1 n xs    
    | ((n <= 0) || null xs) = xs   

    | otherwise = fun1(n-1) (tail xs)

main = do
    print(fun1 2 [2,3,5,7]) 