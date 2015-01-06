
buildProject()
{
  cd libdIa && \
  make clean && \
  make

  return $?
}

buildApuImage()
{
  DIA_VERSION=`cat libdIa/Version`
  rm -rf apu && \
  mkdir -p apu/data/lib && \
  mkdir -p apu/control && \
  cp libdIa/lib/libdIa.so apu/data/lib/libdIa-$DIA_VERSION.so && \
  echo "cd \$ROOTACT/lib" > apu/control/postinst && \
  echo "ln -f -s libdIa-$DIA_VERSION.so libdIa.so" >> apu/control/postinst
}

projectName()
{
  echo "libdIa"
}

projectDescription()
{
  echo "M2M dIa implementation"
}

projectArchDepend()
{
  # yes, need arch for building libdIa 
  return 0
}

