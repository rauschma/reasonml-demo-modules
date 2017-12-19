module DifferentPlus = {
    let (+) = (x, y) => x * y;
};

DifferentPlus.(
  print_int(3 + 6) /* 18 */
);