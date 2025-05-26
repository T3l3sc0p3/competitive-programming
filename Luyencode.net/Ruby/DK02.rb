a,b,c = gets.split.map(&:to_i)
puts a>b && a>c ? a : b>a && b>c ? b : c