import Data.Char
f::[Int]->Int
f arr=sum[x|x<-arr,odd x]
prj ::[Int]->[Int]
myabs :: Int->Int
myabs n
        | n>=0 =n
        | n<0 = -n
prj arr=[myabs x|x<-arr]
f'::[Int]->Int
sum' :: [Int]->Int
sum' [] =0
sum' [x]=x
sum' (x:xs)=x+sum' xs
f'  arr= sum'[x|x<-arr,odd x]
maximum' ::(Ord a)=>[a]->a
maximum' [] = error"dispossible" {-agar []=0 daalte toh kaam nhi kaerta  think kyun?-}
maximum' [x]=x
maximum' (x:xs)
              |x>=maxtail = x  {-jab ordering matlab comparision ho tb use | i.e guards   warna agar simple conditions hai toh no need-}
              | x <maxtail = maxtail
              where maxtail = maximum' xs {-where binding-}
maximum'' ::(Integral a)=>[a]->a      {-dekho idhar we have nt used guards coz simple conditions hai matlab match making hai no comparisions involved-}
maximum'' []= error "not possible"
maximum'' [x]=x
maximum''(x:xs)=max x (maximum'' xs)
repeat' ::(Ord i,Num i)=> i -> [Int]->[Int]

repeat' n [] = []

repeat' n (x:xs)
                | n>0 = x:repeat' (n-1) (x:xs)
                | n==0 = repeat' n xs
                | otherwise = []
replicate' :: (Num i, Ord i) => i -> a -> [a]
replicate' n x
                | n <= 0    = []
                | otherwise = x:replicate' (n-1) x
repeat'' :: Int->[Int]->[Int]
repeat'' n [] = []
repeat'' n (x:xs)=replicate' n x++repeat'' n xs
{-sum of odd elements of the list-}
f'''::[Int]->Int
sum'' :: [Int]->Int
sum'' [] =0
sum'' [x]=x
sum'' (x:xs)=x+sum'' xs
f''' arr=sum''[x|x<-arr,odd x]

{-take elements from list self program -}
take':: Int -> [Int]->[Int]
take' _ []=[]
take' n _
          |n<=0 = []
take' n (x:xs)=x:take' (n-1) xs
elem' :: (Eq a) => a -> [a] -> Bool
elem' a [] = False
elem' a (x:xs)
    | a == x    = True
    | otherwise = a `elem'` xs

{-QUICKSORT-}
quicksort::[Int]->[Int]
quicksort []=[]
quicksort (x:xs)=
          let  smallsort=quicksort[a|a<-xs,a<=x]
               largesort = quicksort[a|a<-xs,a>x]
          in smallsort++[x]++largesort
{-to check whether the list is in ascending order or not-}
ascending' :: [Int]->Bool
ascending' []=True
ascending' [x]=True
ascending'(x:y:ys)= (x<=y)&&ascending' (y:ys)

capital:: Char->Char
capital ch
           | (ch>='a'&&ch<='z')= chr(ord ch + (ord 'A'-ord 'a'))
           |otherwise =ch
lookup :: String->[(String,Int)]->Int
lookup s []=-1
lookup s [(name'', marks):zs]
               | (name''== s) = marks
               | otherwise lookup s zs
myRepeat:: (Int->Int->[Int])->Int->Int->[Int]
myRepeat f 0 x = [x]
myRepeat f n x = f (head (myRepeat f (n-1) x))
collatz :: [Int] -> [Int]
collatz []=[]
collatz (x:xs)
      | x`div`2==0 = prj (div x 2) collatz xs
      | x`div`2/=0 = prj (3*x+1) collatz xs
            where prj ::Int->[Int]
            prj []=[]
            prj c=[c]
            prj x [xs]=(x:xs)
