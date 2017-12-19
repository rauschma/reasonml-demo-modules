type t = string;

let make = (): t => "";
let logStr = (str: string, log: t): t => log ++ str ++ "\n";

let print = (log: t) => print_string(log);
