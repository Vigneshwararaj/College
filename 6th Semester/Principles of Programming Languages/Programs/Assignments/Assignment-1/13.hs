listdigits :: Int -> [Int]
listdigits n = if n < 10 then [n] 
               else (listdigits (n `div` 10)) ++ (listdigits (n `mod` 10))

main = do
    print("Enter the number")
    x <- getLine
    let ax = read x :: Int
    print(sum(listdigits ax))
