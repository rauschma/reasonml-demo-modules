let () = Log.(
  make()
    |> logStr("Hello")
    |> logStr("everyone")
    |> print
);

/* Output:
Hello
everyone
*/