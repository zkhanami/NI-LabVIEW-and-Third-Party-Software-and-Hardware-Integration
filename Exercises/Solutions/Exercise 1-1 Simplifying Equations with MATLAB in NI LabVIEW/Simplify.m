function out = Simplify(input_eq)
    % Simplify - Simplifies a symbolic equation string input.
    % Convert the input string to a symbolic expression
    eq = str2sym(input_eq);
    % Simplify the symbolic expression
    simp_eq = simplify(eq, "IgnoreAnalyticConstraints", true);
    % Convert the simplified symbolic expression back to a string
    out = char(simp_eq);
end
