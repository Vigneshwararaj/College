vol :: Float -> Float
vol r1 = (4/3) * pi * r1^3
ar :: Float -> Float
ar r1 = 4 * pi * r1^2

main = do
    putStrLn "Enter radius value"
    ra <- getLine  
    let r1 = read ra :: Float
    print("Surface Area: " ++ show(ar r1) ++ "  Volume: " ++ show(vol r1))
