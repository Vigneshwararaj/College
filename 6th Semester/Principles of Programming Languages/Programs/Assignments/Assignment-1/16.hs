disp :: Float -> Float -> Float -> Float
disp u t a = (u*t) + 0.5*(a*(t^2))
main = do
    print("Enter the u t and a values: ")
    u <- getLine
    t <- getLine
    a <- getLine
    let ux = read u :: Float
    let tx = read t :: Float
    let ax = read a :: Float
    
    print("The displacement is: " ++ show(disp ux tx ax))
