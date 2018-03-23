prajawal xs=[x+1|x<-xs,odd x]
prj :: [Char] -> [Char] -> [Char]
prj first second = [f] ++ " " ++ [s]
  where (f:_) = first
        (s:_) = second
r xss=[[x|x<-xs , odd x]|xs<-xss]
prjo :: (Integral a) => a -> String
prjo x=if x<10 then "prajhhh" else "poiuy"
length' :: (Num b) => [a] -> b
length' [] = 0
length' (x:xs) = 1 + length' xs
calcarea ::(RealFloat a)=> [(a,a)]->[a]
calcarea xs=[area j b | (j,b) <- xs]
  where area g f = g*f
cyl :: (RealFloat a)=>[(a,a)]->[a]
cyl xs=
            sidearea xs
            where sidearea xs =[2*3.14*r*q|(r,q)<-xs]
rev :: [Int]->[Int]
rev l =
         reverse l
          where reverse []=[]
                reverse (x:l)=reverse l ++[x]
f arr =
        sum' arr
             where sum'[]=0
                   sum' xs= sum [x | x <- xs, odd x ]
len :: [a] -> Int
len lst = sum[1|x<-lst]
f' :: [Int] -> [Int]
f' []=[]
f' [x]=[]
f' [x,y]=[y]
f' (x:y:xs)=[y]++ f' xs
f'' :: Int -> [Int] -> [Int]
f'' p (x:xs)=
              f3 p (x:xs)
                   where
                    f3 0 [] =[]
                    f3 n []=[]
                    f3 1 (x:xs)=f3 n xs
                    f3 n (x:xs)= x : f3 (n-1)(x:xs)
