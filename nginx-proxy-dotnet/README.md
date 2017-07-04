# nginx-proxy-dotnet

Uses the Docker Compose tool to set up an ASP.NET Core application container running on the Kestrel web server and places it behind a Nginx-based reverse-proxy server with SSL support, which runs in a separate container.

## Getting Started

1. Clone the repository:

```
git clone https://github.com/gentisaliu/playground.git
```

2. `cd` to project folder:

```
cd playground/nginx-proxy-dotnet/aspnetapp
```

3. 

#### Create Docker image for ASP.NET Core App

```
git clone https://github.com/gentisaliu/playground.git
cd playground/nginx-proxy-dotnet/aspnetapp
```

```
dotnet restore
dotnet run
```

```
dotnet publish -c Release -o published
docker build -t aspnetapp .
docker run -d -p 8181:80 aspnetapp
```

#### Create Docker image for nginx

```
docker build -t nginx-proxy .
docker run -d -p 8080:80 nginx-proxy
```

## Resources

- [Tutorial: Deploy an ASP.NET Core Application on Linux with Docker](https://stormpath.com/blog/tutorial-deploy-asp-net-core-on-linux-with-docker)
- [Set up a hosting environment for ASP.NET Core on Linux with Nginx, and deploy to it](https://docs.microsoft.com/en-us/aspnet/core/publishing/linuxproduction)
- [Docker: Getting Started](https://docs.docker.com/get-started/)
- [.NET Core Docker Samples](https://github.com/dotnet/dotnet-docker-samples)
- [library/nginx at Docker Hub](https://hub.docker.com/_/nginx/)
- [jwilder/nginx-proxy](https://github.com/jwilder/nginx-proxy)
- [How To Containerize and Use Nginx as a Proxy](https://www.digitalocean.com/community/tutorials/docker-explained-how-to-containerize-and-use-nginx-as-a-proxy)
- [Understanding Nginx HTTP Proxying, Load Balancing, Buffering, and Caching](https://www.digitalocean.com/community/tutorials/understanding-nginx-http-proxying-load-balancing-buffering-and-caching)
- [Docker Volumes and Networks with Compose](https://www.linux.com/learn/docker-volumes-and-networks-compose)
- [Networking in Compose](https://docs.docker.com/compose/networking)
- [Using letsencrypt with nginx on docker](http://blog.nbellocam.me/2016/03/10/letsencrypt-and-nginx-on-docker)
- [Host ASP.NET Core on Linux with Nginx](https://docs.microsoft.com/en-us/aspnet/core/publishing/linuxproduction)