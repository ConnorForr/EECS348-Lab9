<html>
    <head>
        <title>PHP table</title>
    </head>
    <body>
        <table border="1">
            <tbody>
            <?php
                $dimension = intval($_POST['table-size']);

                for ($i = 0; $i <= $dimension; $i++) {
                    print "<tr>";
                    for($j = 0; $j <= $dimension; $j++) {
                        if(($i == 0) and ($j == 0)) {
                            print "<td></td>";
                        } else if ($i == 0) {
                            print "<td>$j</td>";
                        } else if ($j == 0) {
                            print "<td>$i</td>";
                        } else {
                            $value = $i * $j;
                            print "<td>$value</td>";
                        }
                    }
                    print "</tr>";
                }
            ?>
            </tbody>
        </table>

    </body>
</html>