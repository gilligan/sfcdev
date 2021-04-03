{ stdenv, fetchFromGitHub }:

stdenv.mkDerivation {
  pname = "SuperFamiconv";
  version = "0.9.2-git";
  src = fetchFromGitHub {
    owner = "Optiroc";
    repo = "SuperFamiconv";
    rev = "edff4f2068e2fb57017d1b8e7907103a0a0f9ab8";
    sha256 = "01rxmswds3k64siy9ip6h4yqa2g4gs00dg4ycc1f98wjysjlnhli";
  };
  installPhase = ''
    mkdir -p $out
    cp -R bin $out
  '';
}
