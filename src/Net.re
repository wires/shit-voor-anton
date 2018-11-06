
[@bs.module "./net.js"] external f : list(int) => (list(list(int)), list(int)) = "f";
[@bs.module "./net.js"] external hackLog : ((list(list(int)), list(int))) => unit = "hack";

/*
[@bs.module "./js/net.js"] external initial : transitions => array(int) = "";
[@bs.module "./js/net.js"] external terminal : transitions => array(int) = "";
[@bs.module "./js/net.js"] external interior : transitions => array(int) = "";
[@bs.module "./js/net.js"] external all : transitions => array(int) = "";
[@bs.module "./js/net.js"] external allButInitial : transitions => array(int) = "";
[@bs.module "./js/net.js"] external transitions : transitions => int = "";
[@bs.module "./js/net.js"] external places : transitions => int = "";

let arity = (n:transitions) : int => initial(n) |> Js.Array.length;
let coarity = (n:transitions) : int => terminal(n) |> Js.Array.length;

let pre  = (n:transitions, t:int) : list(int) => Array.to_list(n[t]##pre)
let post = (n:transitions, t:int) : list(int) => Array.to_list(n[t]##post)
*/

