# nginx-proxy-dotnet

Uses Docker Compose to set up an ASP.NET Core application container running on Kestrel and places it behind a Nginx-based reverse-proxy server with SSL support running in a separate container.

## Getting Started

1. Clone the repository:

```
git clone https://github.com/gentisaliu/playground.git
```

2. `cd` to project folder:

```
cd playground/nginx-proxy-dotnet
```

3. Build ASP.NET Core application:

```
cd aspnetapp
dotnet restore
dotnet publish -c Release -o published
```

4. Build and run the multi-container Docker application:

```
cd ..
docker-compose build
docker-compose up
```

5. Done. The original ASP.NET Core application can be found at `http://localhost:8181/api/values`, the proxied one at `http://localhost:8080/aspnetapi` or `https://localhost/aspnetapi` respectively.

## Resources

- [Docker: Getting Started](https://docs.docker.com/get-started/)
- [Docker Volumes and Networks with Compose](https://www.linux.com/learn/docker-volumes-and-networks-compose)
- [Networking in Compose](https://docs.docker.com/compose/networking)
- [.NET Core Docker Samples](https://github.com/dotnet/dotnet-docker-samples)
- [Tutorial: Deploy an ASP.NET Core Application on Linux with Docker](https://stormpath.com/blog/tutorial-deploy-asp-net-core-on-linux-with-docker)
- [Host ASP.NET Core on Linux with Nginx](https://docs.microsoft.com/en-us/aspnet/core/publishing/linuxproduction)
- [Set up a hosting environment for ASP.NET Core on Linux with Nginx, and deploy to it](https://docs.microsoft.com/en-us/aspnet/core/publishing/linuxproduction)
- [library/nginx at Docker Hub](https://hub.docker.com/_/nginx/)
- [jwilder/nginx-proxy](https://github.com/jwilder/nginx-proxy)
- [How To Containerize and Use Nginx as a Proxy](https://www.digitalocean.com/community/tutorials/docker-explained-how-to-containerize-and-use-nginx-as-a-proxy)
- [Understanding Nginx HTTP Proxying, Load Balancing, Buffering, and Caching](https://www.digitalocean.com/community/tutorials/understanding-nginx-http-proxying-load-balancing-buffering-and-caching)
- [Using letsencrypt with nginx on docker](http://blog.nbellocam.me/2016/03/10/letsencrypt-and-nginx-on-docker)
