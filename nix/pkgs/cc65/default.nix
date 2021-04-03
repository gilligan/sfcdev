{ stdenv, fetchFromGitHub }:

stdenv.mkDerivation {
  pname = "cc65";
  version = "v2.19";
  src = fetchFromGitHub {
    owner = "cc65";
    repo = "cc65";
    rev = "555282497c3ecf8b313d87d5973093af19c35bd5";
    sha256 = "01a15yvs455qp20hri2pbg2wqvcip0d50kb7dibi9427hqk9cnj4";
  };

  makeFlags = [ "PREFIX=$(out)" ];
}
