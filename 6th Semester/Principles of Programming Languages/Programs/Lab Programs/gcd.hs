hcf1 :: Int -> Int -> Int
hcf1 a b 
    |b/=0 = hcf1 b (mod a b)
    | otherwise = a

main = do
    print(hcf1 24 36)    
