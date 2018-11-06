open Net;

let s = f([0,1,0])

/*Js.log2("Hello, BuckleScript and Reason!", s);*/

hackLog(s)

/*

type fof = (int, int) // int * int

// foo : int => int => bool => int            ariyt =3
// let foo = (int, int, bool) => int

// foo' : (int * int * bool) => int            arity = 1
// let foo' = ((int, int, bool)) => int

*/


Js.log2("list(int)", [1,2,3]);
Js.log2("array(int)", [|1,2,3|]);
Js.log2("array(int)", [1,2,3] |> Array.of_list);



