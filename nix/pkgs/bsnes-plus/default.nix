{ stdenv, qt5, pkg-config, xlibsWrapper, xlibs, SDL, libao, openal, alsaLib, fetchFromGitHub }:
let
  inherit (qt5) qtbase wrapQtAppsHook;
in
  stdenv.mkDerivation {
    pname = "bsnes-plus";
    version = "v05-git";

    src = fetchFromGitHub {
      owner = "devinacker";
      repo = "bsnes-plus";
      rev = "17818367f6832269006989de600e64cda0a16bf4";
      sha256 = "0bk0h4jl4rvhxhvqpvln0jpcmhf4jnx4msj360l0gdw2jc1ciipm";
    };

    patches = [ ./makefile.patch ];

    makeFlags = [ "prefix=$(out)" ];
    buildInputs = [ pkg-config qtbase xlibsWrapper xlibs.libXv SDL libao openal alsaLib ];
    nativeBuildInputs  = [ wrapQtAppsHook ];

    buildPhase = ''
      cd bsnes
      prefix=$out make install
    '';
  }
