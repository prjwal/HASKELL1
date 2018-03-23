sayme :: (Integral a)=>a->String
sayme 1="one"
sayme 2="two"
sayme 3="three"
factorial :: (Integral a) => a -> a
factorial 0 = 1
factorial n = n * factorial (n - 1)
prajawal xxs=[[x|x<-xs,even x]|xs<-xxs]

me :: Char -> String
me 'a' = "Albert"
me 'b' = "Broseph"
me 'c' = "Cecil"
prj :: Char -> String
prj 'v'= "prajawal"
addvector ::(Num a)=>(a,a)->(a,a)->(a,a)
addvector a b=(fst a + fst b, snd a + snd b)

fac x = if x==0
then 1
 else product[1..x]
first :: (a,a,a)->(a)
first (x,_,_)=x
sumthree ::(Num a)=>[a]->a
sumthree []=error "empty list"
sumthree [x]=error "only one element in list"
sumthree [x,y]=error "can't perform action "
sumthree  (x:y:z:_)=x+y+z
suma::(Num a)=>[a]->a
suma []=0
suma (x:xs)=x+sum xs
bmiTell :: (RealFloat a) => a -> String
bmiTell bmi
    | bmi <= 18.5 = "You're underweight, you emo, you!"
    | bmi <= 25.0 = "You're supposedly normal. Pffft, I bet you're ugly!"
    | bmi <= 30.0 = "You're fat! Lose some weight, fatty!"

    head' :: [a] -> a
    head' xs = case xs of [] -> error "No head for empty lists!"
                          (x:_) -> x
