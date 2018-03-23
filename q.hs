
collatz :: [Int] -> [Int]
collatz []=[]
collatz (x:xs)
              | x`div`2==0 = prj (div x 2) collatz xs
              | x`div`2/=0 = prj (3*x+1) collatz xs
                      where prj ::Int->[Int]
                        
                            prj c=[c]
                            prj x [xs]=(x:xs)
