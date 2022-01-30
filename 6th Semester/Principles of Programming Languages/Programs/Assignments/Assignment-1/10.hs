h :: Float -> Float -> Float -> Float
h a b c = let s = (a + b + c)/2 in sqrt(s * (s-a) * (s-b) * (s-c))
    --where s = (a + b + c) `div` 2
main = do
    putStrLn "Enter side values"
    a <- getLine  
    let ax = read a :: Float
    b <- getLine  
    let bx = read b :: Float
    c <- getLine  
    let cx = read c :: Float
    --let s = (ax + bx + cx)`div`2
    print("Area of the triangle " ++ show(h ax bx cx))
