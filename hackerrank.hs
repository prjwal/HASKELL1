prj ::[Int]->[Int]
prj list= [x|x<-[1..length list] , odd x]


odds [] = []
odds [x] = []
odds (e1: e2: xs) = "e2" : odds xs
map print
