quicksort::[Int]->[Int]
quicksort []=[]
quicksort (x:xs)=
          let  smallsort=quicksort[a|a<-xs,a<=x]
               largesort = quicksort[a|a<-xs,a>x]
          in smallsort++[x]++largesort
