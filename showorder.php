<?php
include 'mysql.php';
session_start();
if (!isset($_SESSION["user"])) {
    header("loaction: login.php");
}
?>

<?php
if (isset($_POST['submit'])) {
    $email = $_SESSION['email'];
    // $id=$_GET['srno'];
    $deletequery = "DELETE FROM `tournament hub`.`orderdata` WHERE `orderdata`.`email` = '$email';";
    $s1 = mysqli_query($conn, $deletequery);
    if ($s1) {
        echo "<script>alert(`Order cancelled successfully...`)</script>";
    } else {
        echo "<script>alert(`Oops!!something went wrong!!! Please try again..`)</script>";
    }
}
?>

<!doctype html>
<html lang="en">

<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>cart</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-0evHe/X+R7YkIZDRvuzKMRqM+OrBnVFBL6DOitfPri4tjfHxaWutUpFmBp4vmVor" crossorigin="anonymous">
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/js/bootstrap.bundle.min.js" integrity="sha384-pprn3073KE6tl6bjs2QrFaJGz5/SUsLqktiwsUTF55Jfv3qYSDhgCecCxMW52nD2" crossorigin="anonymous"></script>
</head>

<body>

    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/js/bootstrap.bundle.min.js" integrity="sha384-pprn3073KE6tl6bjs2QrFaJGz5/SUsLqktiwsUTF55Jfv3qYSDhgCecCxMW52nD2" crossorigin="anonymous"></script>

    <?php include 'menu.php'; ?>

    <div class="jumbotron jumbotron-fluid">
        <div class="d-flex justify-content-center">
            <h1>My Order</h1>
        </div>
    </div>
    <?php
    $email = $_SESSION['email'];
    $selectquery = "SELECT * from `orderdata` where `orderdata`.`email`='$email' order by `srno` ;";
    $result = mysqli_query($conn, $selectquery);

    // $result_per_page = 3;
    // $totalrows = mysqli_num_rows($result);

    // $totalpages = ceil($totalrows/$result_per_page);
    // if(!isset($_GET['page']))
    // {
    //     $page=1;
    // }
    // else{
    //     $page=$_GET['page'];
    // }

    // $startindex = ($page-1) * $result_per_page;

    // $selectquery="SELECT * from `orderdata` where `orderdata`.`email`='$email' order by `srno` desc LIMIT " .$startingindex. ",".$result_per_page.";";
    // $result=mysqli_query($conn,$selectquery);

    if (mysqli_num_rows($result) > 0) {
        echo "<table class='table table-hover'>";
        echo "<thead class='table-dark'>";
        echo "<tr>";
        echo "<th>Id</th>";
        echo "<th>Username</th>";
        echo "<th>Email</th>";
        echo "<th scope='col'>Item</th>";
        echo "<th scope='col'>Quantity</th>";
        echo "<th scope='col'>Total Cost</th>";
        echo "<th scope='col'>Address</th>";
        echo "<th scope='col'>date('Y-m-d')</th>";
        echo "<th scope='col'>delete</th>";
        echo "</tr>";
        echo "</thead>";
    }
    while ($row = mysqli_fetch_assoc($result)) {
        echo "<tr>";
        echo "<td>" . $row['srno'] . "</td>";
        echo "<td>" . $row['username'] . "</td>";
        echo "<td>" . $row['email'] . "</td>";
        echo "<td>" . $row['item'] . "</td>";
        echo "<td>" . $row['quantity'] . "</td>";
        echo "<td>" . $row['totalcost'] . "</td>";
        echo "<td>" . $row['address'] . "</td>";
        echo "<td>" . $row['timestamp'] . "</td>";
        echo "<td>" .
            '<form method="POST">
            <button  type="submit" class="btn btn-danger" name="submit" value="Submit">cancel</button>
            </form>' . "</td>";
        echo "</tr>";
    }
    echo '</table>';
    ?>

    <!-- <section class="my-5">
        <div class="container-fluid">
            <div class="row">
                <div class="col-lg-6 col-mg-6 col-12">
                    <h2 class="d-flex justify-content-center">Billing Details</h2>

                    <div class="mb-3">
                        <form action="userinfo.php" method="post">
                            <div class="form-group">
                                <label>Username</lable>
                                    <input type="text" name="user" autocomplete="off" class="form-control" required>
                            </div>
                            <div class="form-group">
                                <label>Email</lable>
                                    <input type="text" name="email" autocomplete="off" class="form-control" required>
                            </div>
                            <div class="form-group">
                                <label>Phone No.</lable>
                                    <input type="text" name="phoneno" autocomplete="off" class="form-control" required>
                            </div>
                            <div class="form-group">
                                <label>Delivery Address</lable>
                                    <textarea class="form-control" name="comments" rows="2"> </textarea>
                                    <br>
                                    <button type="submit" class="btn btn-success">Submit</button>
                            </div>
                        </form>
                    </div>
                </div>
                <div class="col-lg-6 col-mg-6 col-12">
                    <h2 class="d-flex justify-content-center">Your Order</h2>
                    <p class="py-4">
                        Battlegrounds Mobile India, or BGMI, is a player-versus-player shooter game in which up to 100 players compete in a battle royale, a type of large-scale last man standing deathmatch in which players compete to be the last one standing. Players can enter the match as individuals or as small groups of up to four.
                    </p>
                    <a href="https://play.google.com/store/apps/details?id=com.pubg.imobile&hl=en_IN&gl=US" class="btn btn-success">PLACE ORDER</a>
                </div>
            </div>
        </div>
    </section> -->

    <!-- <footer>
        <div class="row">
            <div class="col-lg-12 col-mg-6 col-6">
                <h6 class="p-3 bg-dark text-white text-center">@Prince Dobariya</h6>
            </div>
        </div>
    </footer> -->

    <?php include 'footer.php'; ?>

</body>

</html>