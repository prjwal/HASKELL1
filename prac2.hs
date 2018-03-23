
initials :: [Char] -> [Char] ->[Char]
initials firstname lastname = [f] ++ ". " ++ [l] ++ "."
  where (f:_) = firstname
        (l:_) = lastname
cylinder :: (RealFloat a) => a -> a -> a
cylinder r h =
            let sideArea = 2 * pi * r * h
                topArea = pi * r ^2
            in  sideArea + 2 * topArea
describelist ::[a]->String
describelist xs = "the list is"++ case xs of []->"empty"
  case xs of (x:[])->"single"
