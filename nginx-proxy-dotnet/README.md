## Instructions

```
git clone https://github.com/gentisaliu/playground.git
cd playground/nginx-proxy-dotnet/aspnetapp
```

```
dotnet restore
dotnet run
```

```
dotnet publish -o published
docker build -t aspnetapp .
docker run -d -p 8181:80 aspnetapp
```

## Sources

- https://stormpath.com/blog/tutorial-deploy-asp-net-core-on-linux-with-docker
- https://docs.microsoft.com/en-us/aspnet/core/publishing/linuxproduction
- https://docs.docker.com/get-started/
- https://github.com/dotnet/dotnet-docker-samples