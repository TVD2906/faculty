open Printf;;

2 + 3 ;;

2.4 +. 3.;;

(*
   
int f(int x)
{
  return x*2;
}
   
    
*) 
 
let p1 x = x * 2;;

let f x =x * 2 + 1;;

f 2;;
p1 4;;

let max a b=
  if a > b then printf "%d\n" a
  else printf "%d\n" b;;

max 3 4 ;;
max 14 4;;

let max a b=
  if a > b then a
  else b;;

max 2 8;;