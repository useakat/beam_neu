      double precision estim, sigma, ctime
      integer it1, it2, it3
      common /paramd/ estim,sigma,ctime,it1,it2
      integer ndim, nwild
      common /params/ ndim,nwild
      save /paramd/,/params/
      external bfunc