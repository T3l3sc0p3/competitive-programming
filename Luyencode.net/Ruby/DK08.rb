calc = eval('1.0*'+gets.to_s)
puts ((calc.infinite? || calc.nan?) ? "Math Error" : sprintf("%.2f", calc))