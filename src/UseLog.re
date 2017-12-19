let () = Log.make()
|> Log.logStr("Hello")
|> Log.logStr("everyone")
|> Log.print;

/* Output:
Hello
everyone
*/