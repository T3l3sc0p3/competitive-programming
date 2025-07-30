def PTB1(a, b)
  if a == 0 && b != 0
    puts "NO"
  elsif a == b && b == 0
    puts "WOW"
  else
    puts sprintf("%.2f", -b/a)
  end
end

a,b,c = gets.split.map(&:to_f)
if a == 0
  PTB1(b, c)
else
  delta = b**2 - 4*a*c
  if delta < 0
    puts "NO"
  elsif delta == 0
    puts sprintf("%.2f", -b/(2*a))
  else
    x1, x2 = [sprintf("%.2f",(-b + Math.sqrt(delta))/(2*a)), sprintf("%.2f",(-b - Math.sqrt(delta))/(2*a))].sort
    puts ((x1 == x2) ? x1 : "#{x1} #{x2}")
  end
end